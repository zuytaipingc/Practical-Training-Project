package com.css0115.dao;

import com.css0115.pojo.Product;
import com.css0115.pojo.ProductCategory;
import org.apache.ibatis.annotations.Param;

import java.util.List;

public interface ProductMapper {
    // 根据商品类型ID获取商品列表
//    List<ProductCategory> getProduct(@Param("id") Integer id);
    // 根据ID获取商品列表
    public List<Product> getProduct(@Param("id")Integer id);
}
