int __fastcall sub_256514(int a1)
{
  int v1; // r3

  v1 = *(unsigned __int8 *)(a1 + 12);
  *(_DWORD *)a1 = &off_3F294C;
  if ( v1 )
    fclose(*(FILE **)(a1 + 4));
  return a1;
}
