int __fastcall sub_77B8C(int a1, int a2, int a3, unsigned int a4, float a5)
{
  _BYTE v10[4]; // [sp+14h] [bp-10h] BYREF
  char v11[4]; // [sp+18h] [bp-Ch] BYREF
  unsigned __int16 v12; // [sp+1Ch] [bp-8h]

  if ( sub_77A24((int)v11, v10, 0) )
    return -1;
  else
    return sub_77258(a1, a2, a3, a4, v11[0], v11[1], v11[2], v12);
}
