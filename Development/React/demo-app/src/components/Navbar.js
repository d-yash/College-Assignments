import "../Style/Navbar.css";
import Detail from "./Detail";

const Navbar = () => {
  return (
    <div container>
      <div className="tableContainer">
        <table className="marksTable">
          <caption className="tableCaption">Marks table</caption>
          <thead>
            <tr className="tableHeading">
              <th>Name</th>
              <th>Div</th>
              <th>Marks</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <th>Yash</th>
              <th>B</th>
              <th>99</th>
            </tr>
            <tr>
              <th>Sonalben</th>
              <th>E</th>
              <th>86</th>
            </tr>
            <tr>
              <th>Amitbhai</th>
              <th>E</th>
              <th>92</th>
            </tr>
          </tbody>
        </table>
      </div>
      <div className="content">
        {/* <Detail /> */}
        <p>
                dgnaksdhg asgas;hgasdhgasdjlaks d dga;sodgalsd
            </p>
            <pre>
                slgalsjfg s sf adfjgadl;
                s slfgalk f
                sdgnkas 
                
                [ dsfalskdjf ] = sdfasdhhh
            </pre>
            <h2>DONE</h2>
      </div>
    </div>
  );
};

export default Navbar;
