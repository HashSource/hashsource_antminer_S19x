void __fastcall sub_2DA94(_DWORD *a1, int a2, char a3)
{
  int src; // [sp+8h] [bp-14h] BYREF
  _DWORD *v5; // [sp+Ch] [bp-10h]
  int dest; // [sp+10h] [bp-Ch] BYREF
  char v7; // [sp+14h] [bp-8h]

  v5 = a1;
  src = a2;
  if ( dword_87AB8 )
  {
    v7 = 0;
    memcpy(&dest, &src, sizeof(dest));
    sub_2D0EC(v5, (char *)&dest, a3);
  }
}
