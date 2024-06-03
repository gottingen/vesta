// Copyright 2023 The Elastic-AI Authors.
// part of Elastic AI Search
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
// Created by jeff on 24-4-15.
//
#include <signal.h>
#include <stdio.h>

int main(int argc, char**argv)
{
    if(argc !=2) {
        fprintf(stdout, "Failed\n");
        fflush(stdout);  /* ensure the output buffer is seen */
        return 0;
    }
    fprintf(stdout, "%s\n", argv[1]);
    fflush(stdout);  /* ensure the output buffer is seen */
    //raise(SIGABRT);
    return 0;
}