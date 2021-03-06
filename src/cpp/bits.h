#pragma once
namespace bits {
int LeadingZeros(unsigned int x);
int LeadingZeros16(uint16_t x);
int LeadingZeros32(uint32_t x);
int LeadingZeros64(uint64_t x);
int LeadingZeros8(uint8_t x);
int Len(unsigned int x);
int Len16(uint16_t x);
int Len32(uint32_t x);
int Len64(uint64_t x);
int Len8(uint8_t x);
int OnesCount(unsigned int x);
int OnesCount16(uint16_t x);
int OnesCount32(uint32_t x);
int OnesCount64(uint64_t x);
int OnesCount8(uint8_t x);
unsigned int Reverse(unsigned int x);
uint16_t Reverse16(uint16_t x);
uint32_t Reverse32(uint32_t x);
uint64_t Reverse64(uint64_t x);
uint8_t Reverse8(uint8_t x);
unsigned int ReverseBytes(unsigned int x);
uint16_t ReverseBytes16(uint16_t x);
uint32_t ReverseBytes32(uint32_t x);
uint64_t ReverseBytes64(uint64_t x);
unsigned int RotateLeft(unsigned int x, int k);
uint16_t RotateLeft16(uint16_t x, int k);
uint32_t RotateLeft32(uint32_t x, int k);
uint64_t RotateLeft64(uint64_t x, int k);
uint8_t RotateLeft8(uint8_t x, int k);
int TrailingZeros(unsigned int x);
int TrailingZeros16(uint16_t x);
int TrailingZeros32(uint32_t x);
int TrailingZeros64(uint64_t x);
int TrailingZeros8(uint8_t x);
constexpr int UintSize{64};
static constexpr int deBruijn32{125613361};
static std::vector<uint8_t> deBruijn32tab;
static constexpr int deBruijn64{285870213051353865};
static std::vector<uint8_t> deBruijn64tab;
static std::vector<uint8_t> len8tab;
static constexpr int m0{6148914691236517205};
static constexpr int m1{3689348814741910323};
static constexpr int m2{1085102592571150095};
static constexpr int m3{71777214294589695};
static constexpr int m4{281470681808895};
static std::vector<uint8_t> ntz8tab;
static std::vector<uint8_t> pop8tab;
static std::vector<uint8_t> rev8tab;
static constexpr int uintSize{64};
} // namespace bits
