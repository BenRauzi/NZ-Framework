-- --------------------------------------------------------
-- Host:                         104.153.109.42
-- Server version:               10.1.38-MariaDB - mariadb.org binary distribution
-- Server OS:                    Win64
-- HeidiSQL Version:             9.5.0.5196
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


-- Dumping database structure for nzframework
CREATE DATABASE IF NOT EXISTS `nzframework` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `nzframework`;

-- Dumping structure for table nzframework.users
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
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Dumping data for table nzframework.users: ~1 rows (approximately)
/*!40000 ALTER TABLE `users` DISABLE KEYS */;
INSERT INTO `users` (`uid`, `name`, `bankaccount`, `cash`, `bank`, `items`, `copLevel`, `medicLevel`, `licenses`) VALUES
	('76561198072625284', 'Nicholas Jo\'Foski', 10639, 524425, 0, '[[[[],[],[],["U_C_Man_casual_3_F",[]],["V_Safety_blue_F",[]],["B_AssaultPack_cbr",[]],"H_Cap_blk","G_Spectacles",[],["ItemMap","","","ItemCompass","ItemWatch",""]],4],[[[],[],[],["U_C_Poloshirt_stripped",[]],[],[],"","G_Spectacles_Tinted",[],["ItemMap","","","ItemCompass","ItemWatch",""]],1]]', '[[0,1]]', '[[0,1]]', '[[["NZF_license_driver"],1]]');
/*!40000 ALTER TABLE `users` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
