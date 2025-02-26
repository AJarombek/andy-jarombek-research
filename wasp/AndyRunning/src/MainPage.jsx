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
            href="https://wasp.sh/docs/tutorial/create"
            target="_blank"
            rel="noreferrer noopener"
          >
            Take the Tutorial
          </a>
          <a
            className="button button-outline"
            href="https://discord.com/invite/rzdnErX"
            target="_blank"
            rel="noreferrer noopener"
          >
            Chat on Discord
          </a>
        </div>
      </main>
    </div>
  )
}
