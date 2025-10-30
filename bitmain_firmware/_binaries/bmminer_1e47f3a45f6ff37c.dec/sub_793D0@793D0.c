int __fastcall sub_793D0(int a1, int a2, int a3, unsigned int a4, float a5)
{
  _BYTE v10[4]; // [sp+18h] [bp-14h] BYREF
  int v11; // [sp+1Ch] [bp-10h] BYREF
  char v12[4]; // [sp+20h] [bp-Ch] BYREF
  unsigned __int16 v13; // [sp+24h] [bp-8h]

  v11 = 0;
  if ( sub_791C0((int)v12, v10, 0) )
    return -1;
  else
    return sub_786D8(a1, a2, a3, a4, v12[0], v12[1], v12[2], v13, &v11);
}
