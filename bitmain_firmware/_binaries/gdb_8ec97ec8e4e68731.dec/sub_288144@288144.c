int __fastcall sub_288144(const char *a1)
{
  int v1; // r3
  int v3; // r0

  v1 = (int)a1;
  if ( a1 && (v1 = *(unsigned __int8 *)a1, *a1) )
  {
    v3 = strtol(a1, 0, 10);
    dword_48AD20 = v3 & ~(v3 >> 31);
    return 0;
  }
  else
  {
    dword_48AD20 = v1;
    return 0;
  }
}
