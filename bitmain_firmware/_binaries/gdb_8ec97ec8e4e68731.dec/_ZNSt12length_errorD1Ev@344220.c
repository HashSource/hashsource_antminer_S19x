void __fastcall std::length_error::~length_error(std::length_error *this)
{
  *(_DWORD *)this = &off_468E78;
  std::logic_error::~logic_error(this);
}
