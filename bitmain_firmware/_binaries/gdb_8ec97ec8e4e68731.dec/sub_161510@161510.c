int __fastcall sub_161510(int a1, int a2)
{
  const char *v2; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int src; // [sp+1Ch] [bp-4h] BYREF

  v2 = *(const char **)a2;
  src = a2;
  if ( !strncmp(v2, "load", 4u) )
  {
    v5 = 1;
  }
  else if ( !strncmp(v2, "note", 4u) )
  {
    v5 = 4;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(_DWORD *)(a2 + 20);
  if ( (v6 & 8) != 0 )
    v7 = 4;
  else
    v7 = 6;
  if ( (v6 & 0x10) != 0 )
    v7 |= 1u;
  return sub_2A7B9C(a1, v5, 1, v7, 0, 0, 0, 0, 1, &src);
}
