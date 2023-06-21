import React from 'react'
import { AiOutlineGithub } from 'react-icons/ai';
import { ImLinkedin2 } from 'react-icons/im';
import { RxTwitterLogo } from 'react-icons/rx';
import { motion } from 'framer-motion';

const LeftSide = () => {
  return (
    <div transition={{duration:0.2, delay:1.3}} className='w-full h-full flex flex-col items-center justify-end gap-8 text-textLight'>
      <div className='flex flex-col gap-8'>
        <motion.a initial={{x:-10, opacity:0}} animate={{x:0, opacity:1}} transition={{duration:0.3, delay:1.1}} href="https://github.com/d-yash" target='_blank'><span className='w-10 h-10 text-[30px] bg-hoverColor rounded-full inline-flex items-center justify-center hover:text-textGreen cursor-pointer hover:-translate-y-2 transition-all duration-300'><AiOutlineGithub /></span></motion.a>
        <motion.a initial={{x:-10, opacity:0}} animate={{x:0, opacity:1}} transition={{duration:0.3, delay:0.8}} href="https://www.linkedin.com/in/yash-dhuliya-37667920b/" target='_blank'><span className='w-10 h-10 text-[22px] bg-hoverColor rounded-full inline-flex items-center justify-center hover:text-textGreen cursor-pointer hover:-translate-y-2 transition-all duration-300'><ImLinkedin2 /></span></motion.a>
        <motion.a initial={{x:-10, opacity:0}} animate={{x:0, opacity:1}} transition={{duration:0.3, delay:0.5}} href="https://twitter.com/DhuliyaYash?t=FaqUzt2IRn2xM0ohZIUGIQ&s=09" target='_blank'><span className='w-10 h-10 text-[28px] bg-hoverColor rounded-full inline-flex items-center justify-center hover:text-textGreen cursor-pointer hover:-translate-y-2 transition-all duration-300'><RxTwitterLogo /></span></motion.a>
      </div>
      <motion.div initial={{x:-10, opacity:0}} animate={{x:0, opacity:1}} transition={{duration:0.3, delay:0.2}} className='w-[2px] bg-textDark h-44'></motion.div>
    </div>
  )
}

export default LeftSide;
