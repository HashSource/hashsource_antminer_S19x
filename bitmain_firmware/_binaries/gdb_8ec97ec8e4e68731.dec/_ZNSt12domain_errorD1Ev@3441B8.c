void __fastcall std::domain_error::~domain_error(std::domain_error *this)
{
  *(_DWORD *)this = &off_468E64;
  std::logic_error::~logic_error(this);
}
