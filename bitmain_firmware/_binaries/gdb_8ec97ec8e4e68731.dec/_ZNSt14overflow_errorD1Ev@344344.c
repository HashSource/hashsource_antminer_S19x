void __fastcall std::overflow_error::~overflow_error(std::overflow_error *this)
{
  *(_DWORD *)this = &off_468EB4;
  std::runtime_error::~runtime_error(this);
}
