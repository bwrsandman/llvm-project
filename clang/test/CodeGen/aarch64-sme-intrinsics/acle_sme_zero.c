// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 3
// REQUIRES: aarch64-registered-target
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sme -target-feature +sve -S -O1 -Werror -emit-llvm -o - %s | FileCheck %s -check-prefixes=CHECK,CHECK-C
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sme -target-feature +sve -S -O1 -Werror -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefixes=CHECK,CHECK-CXX
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sme -target-feature +sve -S -O1 -Werror -o /dev/null %s

#include <arm_sme.h>

// CHECK-C-LABEL: define dso_local void @test_svzero_mask_za(
// CHECK-C-SAME: ) local_unnamed_addr #[[ATTR0:[0-9]+]] {
// CHECK-C-NEXT:  entry:
// CHECK-C-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 0)
// CHECK-C-NEXT:    ret void
//
// CHECK-CXX-LABEL: define dso_local void @_Z19test_svzero_mask_zav(
// CHECK-CXX-SAME: ) local_unnamed_addr #[[ATTR0:[0-9]+]] {
// CHECK-CXX-NEXT:  entry:
// CHECK-CXX-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 0)
// CHECK-CXX-NEXT:    ret void
//
void test_svzero_mask_za(void) __arm_inout("za") {
  svzero_mask_za(0);
}

// CHECK-C-LABEL: define dso_local void @test_svzero_mask_za_1(
// CHECK-C-SAME: ) local_unnamed_addr #[[ATTR0]] {
// CHECK-C-NEXT:  entry:
// CHECK-C-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 176)
// CHECK-C-NEXT:    ret void
//
// CHECK-CXX-LABEL: define dso_local void @_Z21test_svzero_mask_za_1v(
// CHECK-CXX-SAME: ) local_unnamed_addr #[[ATTR0]] {
// CHECK-CXX-NEXT:  entry:
// CHECK-CXX-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 176)
// CHECK-CXX-NEXT:    ret void
//
void test_svzero_mask_za_1(void) __arm_inout("za") {
  svzero_mask_za(176);
}

// CHECK-C-LABEL: define dso_local void @test_svzero_mask_za_2(
// CHECK-C-SAME: ) local_unnamed_addr #[[ATTR0]] {
// CHECK-C-NEXT:  entry:
// CHECK-C-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 255)
// CHECK-C-NEXT:    ret void
//
// CHECK-CXX-LABEL: define dso_local void @_Z21test_svzero_mask_za_2v(
// CHECK-CXX-SAME: ) local_unnamed_addr #[[ATTR0]] {
// CHECK-CXX-NEXT:  entry:
// CHECK-CXX-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 255)
// CHECK-CXX-NEXT:    ret void
//
void test_svzero_mask_za_2(void) __arm_inout("za") {
  svzero_mask_za(255);
}

// CHECK-C-LABEL: define dso_local void @test_svzero_za(
// CHECK-C-SAME: ) local_unnamed_addr #[[ATTR2:[0-9]+]] {
// CHECK-C-NEXT:  entry:
// CHECK-C-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 255)
// CHECK-C-NEXT:    ret void
//
// CHECK-CXX-LABEL: define dso_local void @_Z14test_svzero_zav(
// CHECK-CXX-SAME: ) local_unnamed_addr #[[ATTR2:[0-9]+]] {
// CHECK-CXX-NEXT:  entry:
// CHECK-CXX-NEXT:    tail call void @llvm.aarch64.sme.zero(i32 255)
// CHECK-CXX-NEXT:    ret void
//
void test_svzero_za(void) __arm_out("za") {
  svzero_za();
}
//// NOTE: These prefixes are unused and the list is autogenerated. Do not add tests below this line:
// CHECK: {{.*}}
