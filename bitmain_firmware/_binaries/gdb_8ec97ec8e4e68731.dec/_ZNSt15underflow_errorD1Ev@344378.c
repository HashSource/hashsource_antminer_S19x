void __fastcall std::underflow_error::~underflow_error(std::underflow_error *this)
{
  *(_DWORD *)this = &off_468EC8;
  std::runtime_error::~runtime_error(this);
}
