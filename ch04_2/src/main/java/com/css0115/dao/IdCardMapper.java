package com.css0115.dao;

import com.css0115.pojo.IdCard;
import org.apache.ibatis.annotations.Param;

public interface IdCardMapper {
    IdCard findCodeById(@Param("id")Integer id);

    IdCard findCodeById2(@Param("uid")Integer id);

}
