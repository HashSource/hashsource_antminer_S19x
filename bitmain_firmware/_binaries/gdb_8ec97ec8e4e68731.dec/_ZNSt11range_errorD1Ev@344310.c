void __fastcall std::range_error::~range_error(std::range_error *this)
{
  *(_DWORD *)this = &off_468E50;
  std::runtime_error::~runtime_error(this);
}
