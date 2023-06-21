import React from 'react';
import { logo } from "@/public/assets"
import Image from 'next/image';
import Link from 'next/link';
import { motion } from 'framer-motion';

function Navbar() {
  return (
    <div className='w-full shadow-navbarShadow h-20 lg:h-[12vh] sticky top-0 z-50 bg-bodyColor px-4'>
      <div className='max-w-container h-full mx-auto py-1 font-titleFont flex items-center justify-between'>
        <motion.div initial={{ opacity: 0 }} animate={{ opacity: 1 }} transition={{ duration: 0.5 }}>
          <Image src={logo} className='w-18 h-14' />
        </motion.div>
        <div className='hidden mdl:inline-flex items-center gap-9'>
          <ul className='flex text-[18px] gap-9' >
            <Link href="#home" className='flex items-center gap-1 font-medium text-textDark hover:text-textGreen cursor-pointer duration-300 nav-link'>
              <motion.li initial={{ y: -10, opacity: 0 }} animate={{ y: 0, opacity: 1 }} transition={{ duration: 0.2, delay: 0.2 }}>Home</motion.li>
            </Link>
            <Link href="#about" className='flex items-center gap-1 font-medium text-textDark hover:text-textGreen cursor-pointer duration-300 nav-link'>
              <motion.li initial={{ y: -10, opacity: 0 }} animate={{ y: 0, opacity: 1 }} transition={{ duration: 0.2, delay: 0.4 }}>About</motion.li>
            </Link>
            <Link href="#project" className='flex items-center gap-1 font-medium text-textDark hover:text-textGreen cursor-pointer duration-300 nav-link'>
              <motion.li initial={{ y: -10, opacity: 0 }} animate={{ y: 0, opacity: 1 }} transition={{ duration: 0.2, delay: 0.6 }}>Project</motion.li>
            </Link>
            <Link href="#experience" className='flex items-center gap-1 font-medium text-textDark hover:text-textGreen cursor-pointer duration-300 nav-link'>
              <motion.li initial={{ y: -10, opacity: 0 }} animate={{ y: 0, opacity: 1 }} transition={{ duration: 0.2, delay: 0.8 }}>Experience</motion.li>
            </Link>
            <Link href="#contact" className='flex items-center gap-1 font-medium text-textDark hover:text-textGreen cursor-pointer duration-300 nav-link'>
              <motion.li initial={{ y: -10, opacity: 0 }} animate={{ y: 0, opacity: 1 }} transition={{ duration: 0.2, delay: 1.0 }}>Contact</motion.li>
            </Link>
            <a href="https://drive.google.com/file/d/17AocQ7qj84xX3DmsgaaWSRBFafX8Dwj9/view?usp=sharing">
              <motion.button initial={{ y: -10, opacity: 0 }} animate={{ y: 0, opacity: 1 }} transition={{ duration: 0.2, delay: 1.2 }} className='flex items-center border-2 p-1 rounded-lg px-2 border-textGreen text-textGreen hover:text-white hover:border-textLight duration-300 hover:bg-textDark font-semibold tracking-widest text-[18px]'>Resume</motion.button>
            </a>
          </ul>
        </div>
        <div className='w-6 h-5 flex flex-col justify-between items-center mdl:hidden text-4xl text-textGreen cursor-pointer overflow-hidden group'>
          <span className='w-full h-[2px] bg-textGreen inline-flex transform translate-x-1 group-hover:translate-x-2 transition-all ease-in-out duration-300'></span>
          <span className='w-full h-[2px] bg-textGreen inline-flex transform translate-x-3 group-hover:translate-x-0 transition-all ease-in-out duration-300'></span>
          <span className='w-full h-[2px] bg-textGreen inline-flex transform translate-x-0 group-hover:translate-x-3 transition-all ease-in-out duration-300'></span>
        </div>
      </div>
    </div>

  )
}

export default Navbar;