void __fastcall std::invalid_argument::~invalid_argument(std::invalid_argument *this)
{
  *(_DWORD *)this = &off_468EDC;
  std::logic_error::~logic_error(this);
}
