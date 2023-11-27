# Jsonnet file for my recent exercises.
# Author: Andrew Jarombek
# Date: 10/8/2022

local Exercise(date, type, miles, location, hours, minutes, seconds) = {
    date: date,
    type: type,
    miles: miles,
    location: location,
    hours: hours,
    minutes: minutes,
    seconds: seconds,
};

[
    Exercise("10/29/2022", "virtual bike", 14.99, "New York, NY", 0, 41, 1),
    Exercise("10/28/2022", "virtual bike", 19.38, "New York, NY", 0, 58, 42),
    Exercise("10/28/2022", "virtual bike", 15.62, "New York, NY", 0, 43, 0),
    Exercise("10/28/2022", "virtual bike", 10.67, "New York, NY", 0, 29, 51),
    Exercise("10/27/2022", "virtual bike", 16.85, "New York, NY", 0, 55, 12),
    Exercise("10/26/2022", "virtual bike", 11.25, "New York, NY", 0, 34, 10),
    Exercise("10/26/2022", "virtual bike", 9.39, "New York, NY", 0, 26, 50),
    Exercise("10/26/2022", "virtual bike", 32.58, "New York, NY", 1, 29, 5),
    Exercise("10/25/2022", "virtual bike", 32.43, "New York, NY", 1, 25, 14),
    Exercise("10/24/2022", "virtual bike", 12.53, "New York, NY", 0, 33, 40),
    Exercise("10/24/2022", "virtual bike", 14.09, "New York, NY", 0, 40, 18),
    Exercise("10/23/2022", "virtual bike", 20.10, "New York, NY", 0, 57, 48),
    Exercise("10/23/2022", "virtual bike", 20.64, "New York, NY", 1, 8, 27),
    Exercise("10/23/2022", "virtual bike", 10.45, "New York, NY", 0, 30, 14),
    Exercise("10/22/2022", "bike", null, "Riverside, CT", 1, 0, 0),
    Exercise("10/21/2022", "bike", null, "Riverside, CT", 0, 20, 1),
    Exercise("10/20/2022", "virtual bike", 30.24, "New York, NY", 1, 22, 48),
    Exercise("10/19/2022", "virtual bike", 14.12, "New York, NY", 0, 40, 46),
    Exercise("10/19/2022", "virtual bike", 16.15, "New York, NY", 0, 41, 51),
    Exercise("10/16/2022", "core", null, "New York, NY", 0, 8, 22),
    Exercise("10/14/2022", "walk", 2.00, "New York, NY", 0, 36, 26),
    Exercise("10/14/2022", "walk", 1.91, "New York, NY", 0, 31, 4),
    Exercise("10/13/2022", "strength training", null, "New York, NY", 0, 40, 55),
    Exercise("10/13/2022", "core", null, "New York, NY", 0, 18, 58),
    Exercise("10/13/2022", "walk", 5.02, "New York, NY", 1, 22, 36),
    Exercise("10/11/2022", "weight training", null, "New York, NY", 0, 11, 32),
    Exercise("10/11/2022", "strength training", null, "New York, NY", 0, 43, 25),
    Exercise("10/11/2022", "core", null, "New York, NY", 0, 17, 24),
    Exercise("10/11/2022", "walk", 4.96, "New York, NY", 1, 20, 1),
    Exercise("10/10/2022", "walk", 1.85, "New York, NY", 0, 28, 39),
    Exercise("10/10/2022", "walk", 1.96, "New York, NY", 0, 31, 51),
    Exercise("10/10/2022", "walk", 1.19, "New York, NY", 0, 18, 49),
    Exercise("10/10/2022", "walk", 1.25, "New York, NY", 0, 20, 31),
    Exercise("10/9/2022", "strength training", null, "New York, NY", 0, 44, 8),
    Exercise("10/9/2022", "walk", 5.28, "New York, NY", 1, 21, 57),
    Exercise("10/8/2022", "bike", 6.65, "New York, NY", 0, 34, 36),
    Exercise("10/8/2022", "core", null, "New York, NY", 0, 17, 12),
    Exercise("10/8/2022", "walk", 5.01, "New York, NY", 1, 22, 51),
    Exercise("10/6/2022", "walk", 7.99, "Sandy Springs, GA", 2, 11, 27),
    Exercise("10/6/2022", "walk", 1.39, "Atlanta, GA", 0, 39, 45),
    Exercise("10/5/2022", "strength training", null, "Sandy Springs, GA", 0, 11, 13),
    Exercise("10/5/2022", "core", null, "Sandy Springs, GA", 0, 16, 9),
    Exercise("10/5/2022", "walk", 2.07, "Sandy Springs, GA", 0, 35, 54),
    Exercise("10/4/2022", "walk", 3.37, "Sandy Springs, GA", 0, 58, 18),
    Exercise("10/3/2022", "strength training", null, "Sandy Springs, GA", 0, 20, 4),
    Exercise("10/3/2022", "core", null, "Sandy Springs, GA", 0, 17, 38),
    Exercise("10/3/2022", "walk", 2.13, "Sandy Springs, GA", 0, 37, 48),
    Exercise("10/3/2022", "walk", 1.78, "New York, NY", 0, 31, 10),
    Exercise("10/3/2022", "walk", 1.75, "New York, NY", 0, 30, 11),
    Exercise("10/2/2022", "strength training", null, "New York, NY", 0, 30, 7),
    Exercise("10/2/2022", "bike", 6.66, "New York, NY", 0, 32, 45),
    Exercise("10/2/2022", "walk", 3.12, "New York, NY", 0, 55, 7),
    Exercise("10/2/2022", "run", 2.10, "New York, NY", 0, 17, 34),
    Exercise("10/2/2022", "core", null, "New York, NY", 0, 17, 22),
    Exercise("10/1/2022", "bike", 7.25, "New York, NY", 0, 40, 24),
    Exercise("10/1/2022", "walk", 2.58, "New York, NY", 0, 40, 17),
    Exercise("10/1/2022", "strength training", null, "New York, NY", 0, 49, 50),
    Exercise("10/1/2022", "core", null, "New York, NY", 0, 20, 29),
    Exercise("10/1/2022", "walk", 3.32, "New York, NY", 0, 58, 27),
    Exercise("9/30/2022", "strength training", null, "New York, NY", 0, 49, 35),
    Exercise("9/29/2022", "strength training", null, "New York, NY", 0, 47, 26),
    Exercise("9/29/2022", "core", null, "New York, NY", 0, 18, 38),
    Exercise("9/29/2022", "run", 3.02, "New York, NY", 0, 22, 10),
    Exercise("9/28/2022", "strength training", null, "New York, NY", 0, 48, 7),
    Exercise("9/27/2022", "walk", 0.90, "New York, NY", 0, 13, 54),
    Exercise("9/27/2022", "strength training", null, "New York, NY", 0, 51, 45),
    Exercise("9/27/2022", "walk", 3.10, "New York, NY", 0, 58, 13),
    Exercise("9/27/2022", "run", 1.90, "New York, NY", 0, 18, 3),
    Exercise("9/26/2022", "walk", 2.50, "New York, NY", 0, 46, 38),
    Exercise("9/26/2022", "walk", 1.77, "New York, NY", 0, 31, 18),
    Exercise("9/26/2022", "walk", 1.79, "New York, NY", 0, 30, 6),
    Exercise("9/25/2022", "walk", 1.70, "New York, NY", 0, 32, 25),
    Exercise("9/25/2022", "run", 1.36, "Old Greenwich, CT", 0, 16, 57),
    Exercise("9/25/2022", "strength training", null, "Riverside, CT", 0, 36, 0),
    Exercise("9/25/2022", "kayak", 7.08, "Stamford, CT", 2, 10, 17),
    Exercise("9/25/2022", "walk", 4.23, "Greenwich, CT", 1, 23, 35),
    Exercise("9/24/2022", "walk", 3.70, "Greenwich, CT", 1, 12, 21),
    Exercise("9/24/2022", "core", null, "Riverside, CT", 0, 17, 54),
    Exercise("9/24/2022", "kayak", 3.02, "Riverside, CT", 0, 52, 35),
    Exercise("9/24/2022", "strength training", null, "Riverside, CT", 0, 40, 14),
    Exercise("9/24/2022", "walk", 4.06, "Greenwich, CT", 1, 16, 20),
    Exercise("9/23/2022", "core", null, "Riverside, CT", 0, 13, 17),
    Exercise("9/23/2022", "bike", null, "Riverside, CT", 0, 30, 2),
    Exercise("9/23/2022", "strength training", null, "Riverside, CT", 0, 41, 58),
    Exercise("9/23/2022", "walk", 1.50, "Riverside, CT", 0, 30, 24),
    Exercise("9/22/2022", "walk", 1.16, "Riverside, CT", 0, 22, 31),
    Exercise("9/22/2022", "walk", 1.74, "New York, NY", 0, 33, 16),
    Exercise("9/22/2022", "strength training", null, "New York, NY", 0, 30, 0),
    Exercise("9/21/2022", "walk", 0.86, "New York, NY", 0, 14, 22),
    Exercise("9/21/2022", "strength training", null, "New York, NY", 0, 35, 26),
    Exercise("9/20/2022", "walk", 3.12, "New York, NY", 0, 58, 24),
    Exercise("9/20/2022", "run", 0.65, "New York, NY", 0, 5, 52),
    Exercise("9/20/2022", "strength training", null, "New York, NY", 0, 36, 52),
    Exercise("9/19/2022", "walk", 1.93, "New York, NY", 0, 37, 7),
    Exercise("9/19/2022", "walk", 1.79, "New York, NY", 0, 32, 47),
    Exercise("9/19/2022", "strength training", null, "New York, NY", 0, 25, 0),
    Exercise("9/19/2022", "walk", 1.86, "New York, NY", 0, 33, 24),
    Exercise("9/18/2022", "run", 1.69, "New York, NY", 0, 18, 32),
    Exercise("9/18/2022", "bike", 7.25, "New York, NY", 0, 36, 42),
    Exercise("9/18/2022", "core", null, "New York, NY", 0, 21, 25),
    Exercise("9/18/2022", "strength training", null, "New York, NY", 0, 36, 56),
    Exercise("9/17/2022", "walk", 0.86, "New York, NY", 0, 15, 34),
    Exercise("9/17/2022", "core", null, "New York, NY", 0, 26, 56),
    Exercise("9/17/2022", "strength training", null, "New York, NY", 0, 35, 21),
    Exercise("9/16/2022", "core", null, "New York, NY", 0, 23, 37),
    Exercise("9/16/2022", "walk", 1.24, "New York, NY", 0, 24, 42),
    Exercise("9/16/2022", "bike", 8.55, "New York, NY", 0, 43, 13),
    Exercise("9/16/2022", "run", 0.54, "New York, NY", 0, 4, 45),
    Exercise("9/16/2022", "strength training", null, "New York, NY", 0, 35, 11),
    Exercise("9/15/2022", "walk", 1.52, "New York, NY", 0, 27, 29),
    Exercise("9/15/2022", "walk", 1.45, "New York, NY", 0, 26, 36),
    Exercise("9/15/2022", "bike", 8.32, "New York, NY", 0, 41, 31),
    Exercise("9/15/2022", "strength training", null, "New York, NY", 0, 29, 42),
    Exercise("9/14/2022", "walk", 1.86, "New York, NY", 0, 35, 59),
    Exercise("9/14/2022", "strength training", null, "New York, NY", 0, 28, 34),
    Exercise("9/13/2022", "strength training", null, "New York, NY", 0, 26, 45),
    Exercise("9/12/2022", "strength training", null, "New York, NY", 0, 29, 37),
    Exercise("9/12/2022", "walk", 1.92, "New York, NY", 0, 37, 49),
    Exercise("9/12/2022", "run", 1.44, "New York, NY", 0, 15, 41),
    Exercise("9/12/2022", "strength training", null, "New York, NY", 0, 21, 42),
    Exercise("9/12/2022", "walk", 1.81, "New York, NY", 0, 34, 30),
    Exercise("9/12/2022", "walk", 1.80, "New York, NY", 0, 33, 24),
    Exercise("9/11/2022", "walk", 1.69, "New York, NY", 0, 32, 22),
    Exercise("9/11/2022", "walk", 0.83, "Riverside, CT", 0, 20, 48),
    Exercise("9/11/2022", "core", null, "Riverside, CT", 0, 16, 40),
    Exercise("9/11/2022", "bike", null, "Riverside, CT", 0, 46, 54),
    Exercise("9/11/2022", "kayak", 5.37, "Stamford, CT", 1, 37, 40),
    Exercise("9/11/2022", "run", 1.52, "Old Greenwich, CT", 0, 15, 51),
    Exercise("9/10/2022", "core", null, "Riverside, CT", 0, 18, 15),
    Exercise("9/10/2022", "bike", null, "Riverside, CT", 1, 0, 0),
    Exercise("9/10/2022", "swim", 0.15, "Old Greenwich, CT", 0, 11, 31),
    Exercise("9/10/2022", "kayak", 4.74, "Old Greenwich, CT", 1, 32, 0),
    Exercise("9/9/2022", "strength training", null, "Riverside, CT", 0, 27, 40),
    Exercise("9/9/2022", "bike", null, "Riverside, CT", 0, 40, 1),
    Exercise("9/9/2022", "core", null, "Riverside, CT", 0, 17, 5),
    Exercise("9/9/2022", "kayak", 3.00, "Riverside, CT", 0, 55, 38),
    Exercise("9/9/2022", "walk", 1.75, "New York, NY", 0, 32, 1),
    Exercise("9/8/2022", "core", null, "New York, NY", 0, 17, 14),
    Exercise("9/8/2022", "strength training", null, "New York, NY", 0, 29, 33),
    Exercise("9/7/2022", "bike", 8.37, "New York, NY", 0, 41, 17),
    Exercise("9/7/2022", "strength training", null, "New York, NY", 0, 22, 24),
    Exercise("9/7/2022", "bike", 7.98, "New York, NY", 0, 39, 16),
    Exercise("9/7/2022", "strength training", null, "New York, NY", 0, 20, 1),
    Exercise("9/6/2022", "walk", 0.89, "New York, NY", 0, 15, 41),
    Exercise("9/6/2022", "strength training", null, "New York, NY", 0, 29, 16),
    Exercise("9/6/2022", "walk", 2.34, "New York, NY", 0, 47, 35),
    Exercise("9/6/2022", "run", 1.57, "New York, NY", 0, 12, 36),
    Exercise("9/6/2022", "core", null, "New York, NY", 0, 18, 49),
    Exercise("9/5/2022", "walk", 2.16, "New York, NY", 0, 39, 37),
    Exercise("9/5/2022", "kayak", 5.04, "Old Greenwich, CT", 1, 40, 15),
    Exercise("9/5/2022", "kayak", 1.75, "Riverside, CT", 0, 50, 11),
    Exercise("9/5/2022", "run", 2.05, "Old Greenwich, CT", 0, 19, 50),
    Exercise("9/4/2022", "core", null, "Riverside, CT", 0, 18, 44),
    Exercise("9/4/2022", "kayak", 3.97, "Old Greenwich, CT", 1, 16, 0),
    Exercise("9/4/2022", "kayak", 2.43, "Riverside, CT", 0, 42, 13),
    Exercise("9/4/2022", "strength training", null, "Riverside, CT", 0, 27, 33),
    Exercise("9/3/2022", "strength training", null, "Riverside, CT", 0, 24, 21),
    Exercise("9/3/2022", "bike", null, "Riverside, CT", 0, 30, 19),
    Exercise("9/3/2022", "core", null, "Riverside, CT", 0, 16, 11),
    Exercise("9/3/2022", "strength training", null, "Riverside, CT", 0, 31, 2),
    Exercise("9/2/2022", "strength training", null, "New York, NY", 0, 22, 5),
    Exercise("9/1/2022", "walk", 0.87, "New York, NY", 0, 17, 26),
    Exercise("9/1/2022", "run", 1.57, "New York, NY", 0, 12, 47),
    Exercise("9/1/2022", "run", 2.66, "New York, NY", 0, 18, 3),
    Exercise("9/1/2022", "run", 4.02, "New York, NY", 0, 25, 17),
    Exercise("9/1/2022", "run", 2.10, "New York, NY", 0, 15, 2),
    Exercise("9/1/2022", "core", null, "New York, NY", 0, 11, 1),
    Exercise("9/1/2022", "walk", 0.95, "New York, NY", 0, 16, 57),
    Exercise("8/31/2022", "weight training", null, "New York, NY", 0, 25, 37),
    Exercise("8/31/2022", "run", 10.56, "New York, NY", 1, 23, 25),
    Exercise("8/30/2022", "walk", 2.78, "New York, NY", 0, 47, 4),
    Exercise("8/30/2022", "run", 6.90, "New York, NY", 0, 52, 3),
    Exercise("8/30/2022", "core", null, "New York, NY", 0, 21, 6),
    Exercise("8/28/2022", "run", 12.56, "New York, NY", 1, 30, 34),
    Exercise("8/28/2022", "weight training", null, "New York, NY", 0, 20, 33),
    Exercise("8/28/2022", "core", null, "New York, NY", 0, 21, 3),
    Exercise("8/27/2022", "run", 8.23, "New York, NY", 1, 1, 17),
    Exercise("8/27/2022", "core", null, "New York, NY", 0, 20, 38),
    Exercise("8/26/2022", "walk", 0.99, "New York, NY", 0, 17, 49),
    Exercise("8/26/2022", "run", 7.23, "New York, NY", 0, 54, 22),
    Exercise("8/26/2022", "core", null, "New York, NY", 0, 20, 21),
    Exercise("8/25/2022", "run", 8.32, "New York, NY", 1, 0, 21),
    Exercise("8/25/2022", "weight training", null, "New York, NY", 0, 19, 25),
    Exercise("8/25/2022", "core", null, "New York, NY", 0, 20, 57),
    Exercise("8/24/2022", "walk", 2.30, "New York, NY", 0, 43, 52),
    Exercise("8/24/2022", "core", null, "New York, NY", 0, 18, 16),
    Exercise("8/23/2022", "run", 8.39, "New York, NY", 0, 59, 37),
    Exercise("8/22/2022", "walk", 1.11, "New York, NY", 0, 17, 28),
    Exercise("8/22/2022", "run", 11.14, "New York, NY", 1, 23, 46),
    Exercise("8/21/2022", "walk", 1.76, "New York, NY", 0, 32, 28),
    Exercise("8/21/2022", "run", 5.34, "Greenwich, CT", 0, 49, 1),
    Exercise("8/20/2022", "walk", 5.00, "Boston, MA", 2, 0, 0),
    Exercise("8/20/2022", "run", 3.37, "Riverside, CT", 0, 24, 38),
    Exercise("8/19/2022", "kayak", 2.99, "Riverside, CT", 0, 56, 43),
    Exercise("8/19/2022", "run", 8.32, "Riverside, CT", 0, 59, 20),
    Exercise("8/19/2022", "walk", 1.18, "Riverside, CT", 0, 21, 44),
    Exercise("8/19/2022", "walk", 1.65, "New York, NY", 0, 27, 41),
    Exercise("8/18/2022", "run", 8.43, "New York, NY", 1, 0, 40),
    Exercise("8/16/2022", "core", null, "New York, NY", 0, 23, 11),
    Exercise("8/16/2022", "walk", 0.95, "Brooklyn, NY", 0, 20, 48),
    Exercise("8/16/2022", "walk", 0.78, "Brooklyn, NY", 0, 14, 37),
    Exercise("8/16/2022", "run", 6.46, "New York, NY", 0, 49, 44),
    Exercise("8/15/2022", "walk", 1.72, "New York, NY", 0, 31, 44),
    Exercise("8/15/2022", "run", 3.73, "Riverside, CT", 0, 27, 50),
    Exercise("8/15/2022", "kayak", 1.53, "Riverside, CT", 0, 25, 16),
]