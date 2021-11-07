SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `garage`
-- ----------------------------

CREATE DATABASE IF NOT EXISTS `nzframework` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `nzframework`;

CREATE TABLE IF NOT EXISTS `users` (
  `uid` varchar(50) DEFAULT NULL,
  `name` varchar(50) DEFAULT NULL,
  `bankaccount` int(13) NOT NULL,
  `cash` int(11) NOT NULL DEFAULT '0',
  `bank` int(13) NOT NULL,
  `items` varchar(700) NOT NULL DEFAULT '[]',
  `copLevel` varchar(50) NOT NULL DEFAULT '[[0,1]]',
  `medicLevel` varchar(50) NOT NULL DEFAULT '[[0,1]]',
  `licenses` varchar(100) NOT NULL DEFAULT '[]',
  PRIMARY KEY (`bankaccount`),
  UNIQUE KEY `uid` (`uid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1