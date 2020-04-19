#pragma once

#include <vector>

const std::vector<std::vector<int>> boy{
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},   {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 1, 1, 3, 3, 3, 3, 1, 1, 0, 0, 0},   {0, 0, 0, 1, 1, 3, 3, 3, 3, 3, 3, 3, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 3, 11, 3, 3, 3, 11, 3, 1, 0, 0, 0}, {0, 0, 0, 1, 1, 3, 3, 1, 1, 1, 3, 3, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 3, 3, 1, 3, 1, 3, 3, 1, 1, 0, 0},   {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 3, 3, 3, 5, 3, 3, 5, 3, 3, 3, 0, 0, 0},   {0, 0, 0, 3, 0, 3, 5, 3, 3, 5, 3, 0, 3, 0, 0, 0},
    {0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0},   {0, 0, 0, 0, 0, 3, 5, 5, 5, 3, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0},   {0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0}};

const std::vector<std::vector<int>> grass0{{0, 0, 5, 0, 0, 0, 0, 11},
                                           {0, 0, 0, 0, 0, 0, 0, 11},
                                           {0, 0, 0, 0, 0, 0, 0, 0},
                                           {0, 0, 0, 11, 0, 0, 0, 0},
                                           {0, 0, 0, 0, 6, 0, 0, 0},
                                           {11, 0, 0, 0, 6, 0, 0, 0},
                                           {0, 11, 0, 0, 5, 0, 0, 0},
                                           {0, 11, 0, 0, 0, 0, 5, 0}};
const std::vector<std::vector<int>> grass1{{0, 5, 0, 0, 0, 0, 0, 5},
                                           {0, 0, 0, 0, 0, 0, 0, 5},
                                           {0, 0, 0, 0, 0, 0, 0, 5},
                                           {0, 0, 0, 0, 5, 0, 0, 0},
                                           {0, 0, 0, 0, 5, 0, 0, 0},
                                           {5, 0, 0, 0, 5, 0, 0, 0},
                                           {0, 5, 0, 0, 5, 0, 0, 0},
                                           {0, 5, 0, 0, 0, 0, 0, 5}};

const std::vector<std::vector<int>> branch0{
    {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 1, 0}, {0, 0, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}};
const std::vector<std::vector<int>> branch1{
    {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 0, 0, 0, 0}, {0, 1, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}};
const std::vector<std::vector<int>> branch2{
    {0, 0, 0, 0, 0, 0, 0, 0},  {0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 1, 1, 0}, {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 11, 1, 1, 0, 0, 0}, {0, 1, 1, 1, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}};

const std::vector<std::vector<int>> apple_tree1{
    {0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0},      {0, 0, 6, 11, 11, 0, 0, 0, 0, 6, 11, 11, 0, 0, 0, 0},
    {0, 0, 11, 11, 11, 1, 1, 0, 0, 8, 11, 1, 1, 11, 0, 0}, {0, 0, 0, 8, 11, 1, 1, 1, 0, 0, 0, 1, 8, 11, 11, 0},
    {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 11, 0},     {0, 11, 1, 0, 6, 11, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 1, 6, 11, 11, 0, 11, 1, 1, 1, 0, 0, 0, 0, 0},   {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 11, 11, 11, 0, 0},
    {0, 6, 11, 1, 1, 1, 0, 1, 1, 0, 0, 0, 11, 11, 0, 0},   {6, 11, 11, 11, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0},
    {0, 8, 11, 0, 0, 1, 1, 1, 1, 1, 1, 11, 11, 0, 0, 0},   {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 8, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},      {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},      {0, 0, 8, 11, 11, 1, 1, 1, 1, 1, 1, 11, 6, 11, 0, 0}};

const std::vector<std::vector<int>> apple_tree2{
    {0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0},       {0, 0, 0, 6, 11, 11, 0, 0, 0, 0, 6, 11, 11, 0, 0, 0},
    {0, 0, 0, 11, 11, 11, 11, 11, 0, 0, 8, 11, 1, 0, 0, 0}, {0, 0, 0, 0, 8, 11, 1, 1, 0, 0, 0, 1, 1, 1, 11, 0},
    {0, 0, 11, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 8, 11, 11},    {0, 0, 1, 0, 6, 11, 0, 1, 1, 0, 1, 1, 0, 0, 0, 11},
    {0, 0, 1, 6, 11, 0, 0, 0, 1, 1, 11, 11, 11, 0, 0, 0},   {0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 11, 11, 0, 0, 0},
    {0, 0, 6, 11, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0},      {0, 6, 11, 11, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 8, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},       {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 11, 11, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 8, 0, 0, 0},       {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},       {0, 0, 8, 11, 11, 1, 1, 1, 1, 1, 1, 11, 6, 11, 0, 0}};

const std::vector<std::vector<int>> stone{{0, 0, 0, 0, 0, 0, 0, 0}, {0, 4, 5, 5, 5, 5, 4, 0}, {0, 5, 5, 7, 7, 5, 5, 0},
                                          {0, 5, 7, 7, 7, 7, 5, 0}, {0, 5, 7, 7, 7, 7, 5, 0}, {0, 5, 5, 7, 7, 5, 5, 0},
                                          {0, 4, 5, 5, 5, 5, 4, 0}, {0, 0, 0, 0, 0, 0, 0, 0}};

const std::vector<std::vector<int>> torch_icon{
    {0, 0, 0, 0, 0, 0, 0, 0},   {0, 8, 0, 8, 8, 0, 8, 0}, {0, 8, 8, 9, 9, 8, 8, 0}, {0, 0, 8, 9, 9, 8, 0, 0},
    {0, 0, 8, 10, 10, 8, 0, 0}, {0, 0, 0, 1, 1, 0, 0, 0}, {0, 0, 0, 1, 1, 0, 0, 0}, {0, 0, 0, 1, 1, 0, 0, 0}};
const std::vector<std::vector<int>> hummer_icon{
    {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 1, 5, 5, 5, 0, 0}, {0, 0, 1, 5, 5, 0, 0, 0}, {0, 0, 1, 5, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}};
const std::vector<std::vector<int>> bonfire_icon{
    {0, 0, 0, 0, 0, 0, 0, 0},  {0, 0, 0, 8, 0, 0, 0, 0},  {0, 0, 8, 9, 8, 0, 0, 0}, {0, 0, 9, 9, 9, 8, 0, 0},
    {0, 8, 9, 10, 9, 8, 0, 0}, {0, 8, 9, 10, 9, 8, 0, 0}, {0, 1, 2, 2, 2, 2, 1, 0}, {0, 0, 1, 0, 0, 1, 0, 0}};