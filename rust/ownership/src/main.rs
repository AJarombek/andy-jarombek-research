/*
Learning about ownership in Rust
Author: Andrew Jarombek
Date: 1/2/2025
*/

use fastrand;

fn main() {
    // Create a new scope
    {
        let fact = String::from("Ratatouille is the Best Pixar Movie");

        // Here, the string 'fact' is moved to the variable 'another_fact'
        // From this point forward, it is invalid to use the variable 'fact'
        let another_fact = fact;

        println!("{}", another_fact);

        // This line would fail, due to the move in the code `let another_fact = fact;`
        // println!("{}", fact);
    }

    // After the scope above ends, variable 'fact' is no longer valid, as expected
    // println!(fact);

    let yet_another_fact = String::from("The UConn Huskies are the greatest football program in history.");

    // emphasize_facts() takes a String as an argument.  Therefore, it "takes ownership" of the
    // String value previously assigned to yet_another_fact
    let with_emphasis = emphasize_facts(yet_another_fact);
    println!("{}", with_emphasis);

    // Because emphasize_facts() took ownership of the String value assigned to yet_another_fact,
    // using yet_another_fact is now invalid and fails at compile time.
    // println!("{}", yet_another_fact);
}

fn emphasize_facts(str: String) -> String {
    // Remove the trailing period from str and add a random number of exclamation marks.
    let mut result = str.trim_end_matches('.').to_string();
    let num_exclamations = fastrand::i32(1..=5);
    let exclamations = "!".repeat(num_exclamations as usize);
    result.push_str(&exclamations);
    result
}
