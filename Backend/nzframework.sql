SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `garage`
-- ----------------------------

DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `uid` varchar(50) DEFAULT NULL,
  `name` varchar(50) DEFAULT NULL,
  `bankaccount` int(13) NOT NULL,
  `cash` int(13) NOT NULL,
  PRIMARY KEY (`bankaccount`),
  UNIQUE KEY `uid` (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=2092 DEFAULT CHARSET=latin1;
