import "../Style/Navbar.css";
import logo from "./logo.png";

const Navbar = () => {
  return (
    <nav className="bg-indigo-950 text-white">
      <div className="mx-auto sm:px-6">
        <div className="flex items-center justify-between h-16">
          <div className="flex-shrink-0 flex pl-12">
            <img src={logo} alt="Logo" className="h-14 w-14" />
            <p className="text-white mt-2 px-4 text-[28px] font-mono font-bold">
              WhatsPhone
            </p>
          </div>
          <div>
            <ul className="flex text-left text-[24px]">
              <li className="relative"><a href="#" className="mx-4 px-4 pb-1 border-b-2 hover:animate-bounce">Home</a></li>
              <li className="relative"><a href="#" className="mx-4 px-4 pb-1 border-b-2 hover:animate-bounce">About</a></li>
              <li className="relative"><a href="#" className="mx-4 px-4 pb-1 border-b-2 hover:animate-bounce">Catalogue</a></li>
              <li className="relative"><a href="#" className="mx-4 px-4 pb-1 border-b-2 hover:animate-bounce">Contact Us</a></li>
            </ul>
          </div>
        </div>
      </div>
    </nav>
  );
};

export default Navbar;
