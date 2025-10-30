void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  *(_DWORD *)this = &off_468CA0;
  std::bad_alloc::~bad_alloc(this);
}
