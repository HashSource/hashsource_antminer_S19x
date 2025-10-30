int __fastcall sub_75F7C(int a1, int a2, int a3, unsigned int a4, float a5)
{
  _BYTE v10[4]; // [sp+18h] [bp-10h] BYREF
  int v11; // [sp+1Ch] [bp-Ch] BYREF
  char v12[4]; // [sp+20h] [bp-8h] BYREF
  unsigned __int16 v13; // [sp+24h] [bp-4h]

  v11 = 0;
  if ( sub_75D54((int)v12, v10, 0) )
    return -1;
  else
    return sub_7527C(a1, a2, a3, a4, v12[0], v12[1], v12[2], v13, &v11);
}
