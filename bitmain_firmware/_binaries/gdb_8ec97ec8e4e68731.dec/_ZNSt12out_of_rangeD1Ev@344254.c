void __fastcall std::out_of_range::~out_of_range(std::out_of_range *this)
{
  *(_DWORD *)this = &off_468E8C;
  std::logic_error::~logic_error(this);
}
