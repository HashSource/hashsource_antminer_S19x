std::bad_alloc *__fastcall sub_98478(std::bad_alloc *a1)
{
  *(_DWORD *)a1 = off_36FA40;
  std::bad_alloc::~bad_alloc(a1);
  sub_33AC04(a1);
  return a1;
}
