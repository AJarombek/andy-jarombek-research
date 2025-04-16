import raceImage from './tom_circuit.jpg'
import './Main.css'

export const MainPage = () => {
  return (
    <div className="container">
      <main>
        <div className="logo">
          <img src={raceImage} alt="race" />
        </div>

        <h2 className="welcome-title">
          Andy Jarombek Running Dashboard
        </h2>
        <h3 className="welcome-subtitle">
          Racing Since 2010!
        </h3>

        <div className="buttons">
          <a
            className="button button-filled"
            href="/prs"
          >
            Personal Records
          </a>
          <a
            className="button button-outline"
            href="/results"
          >
            Race Results
          </a>
        </div>
      </main>
    </div>
  )
}
