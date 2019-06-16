#ifndef PROBLEM_H
#define PROBLEM_H

#include "IProblem.h"

class SHARED_EXPORT Problem : IProblem
{
public:

    int getId() const;

    int goalFunction(IVector const* args, IVector const* params, double& res) const;
    int goalFunctionByArgs(IVector const*  args, double& res) const;
    int goalFunctionByParams(IVector const*  params, double& res) const;
    int getArgsDim(size_t& dim) const;
    int getParamsDim(size_t& dim) const;

    int setParams(IVector const* params);
    int setArgs(IVector const* args);

    int derivativeGoalFunction(size_t order, size_t idx, DerivedType dr, double& value, IVector const* args, IVector const* params) const;
    int derivativeGoalFunctionByArgs(size_t order, size_t idx, DerivedType dr, double& value, IVector const* args) const;
    int derivativeGoalFunctionByParams(size_t order, size_t idx, DerivedType dr, double& value, IVector const* params) const;

    ~Problem();

    Problem();

private:
    /*non default copyable*/
    Problem(const IProblem& other) = delete;
    void operator=(const IProblem& other) = delete;

};

#endif // PROBLEM_H
