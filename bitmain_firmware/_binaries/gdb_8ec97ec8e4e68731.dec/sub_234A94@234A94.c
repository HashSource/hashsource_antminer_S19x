int sub_234A94()
{
  int *v0; // r4
  int v1; // t1
  int result; // r0

  v0 = &dword_48A4B4;
  do
  {
    v1 = *(v0 - 8);
    v0 -= 8;
    result = (*(int (__fastcall **)(int *))(v1 + 4))(v0);
  }
  while ( v0 != &dword_48A294 );
  return result;
}
