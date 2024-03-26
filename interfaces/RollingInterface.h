
#ifndef JDR_ROLLINGINTERFACE_H
#define JDR_ROLLINGINTERFACE_H


class RollingInterface {
public:
    virtual int rolling(int chance) = 0;
    virtual ~RollingInterface() {}
};

#endif //JDR_ROLLINGINTERFACE_H
