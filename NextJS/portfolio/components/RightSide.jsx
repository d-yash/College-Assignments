import React from 'react'
import { motion } from 'framer-motion';

const RightSide = () => {
    return (
        <div className='w-full h-full flex flex-col items-center justify-end'>
            <a href="mailto:y.dhuliya.official@gmail.com">
                <p className='text-sm rotate-90 w-72 text-textDark tracking-[3px] mb-36 hover:tracking-[5px] hover:mb-52 hover:text-textGreen transition-all duration-300'>
                    <motion.span initial={{y:-10, opacity:0}} animate={{y:0, opacity:1}} transition={{duration:0.3, delay:1.1}}className='duration:300 transition-all'>y.dhuliya</motion.span>
                    <motion.span initial={{y:-10, opacity:0}} animate={{y:0, opacity:1}} transition={{duration:0.3, delay:0.8}}className='duration:300 transition-all'>.official</motion.span>
                    <motion.span initial={{y:-10, opacity:0}} animate={{y:0, opacity:1}} transition={{duration:0.3, delay:0.5}}className='duration:300 transition-all'>@gmail.com</motion.span>
                </p>
            </a>
            <motion.div initial={{ x: 10, opacity: 0 }} animate={{ x: 0, opacity: 1 }} transition={{ duration: 0.3, delay: 0.2 }} className='w-[2px] bg-textDark h-44 inline-flex '></motion.div>
        </div>
    )
}

export default RightSide;