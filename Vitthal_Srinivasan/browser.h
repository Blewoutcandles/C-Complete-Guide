#pragma once

#include<stack>
#include<string>


class Browser{
    std :: stack<std :: string> url_history;
    public:
        void open_url(std :: string url);
        std :: string back(int times);
};