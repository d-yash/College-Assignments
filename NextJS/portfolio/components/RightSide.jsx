import React from 'react'
import { motion } from 'framer-motion';

const RightSide = () => {
    return (
        <div className='w-full h-full flex flex-col items-center justify-end'>
            <motion.a initial={{x:70, opacity:0}} animate={{x:0, opacity:1}} transition={{duration:0.5, delay:0.6}} href="mailto:y.dhuliya.official@gmail.com">
                <p className='text-sm rotate-90 w-72 text-textDark tracking-[3px] mb-36 hover:tracking-[5px] hover:mb-52 hover:text-textGreen transition-all duration-300'>
                    y.dhuliya.official@gmail.com
                </p>
            </motion.a>
            <motion.div initial={{ x: 10, opacity: 0 }} animate={{ x: 0, opacity: 1 }} transition={{ duration: 0.3, delay: 0.2 }} className='w-[2px] bg-textDark h-44 inline-flex '></motion.div>
        </div>
    )
}

export default RightSide;