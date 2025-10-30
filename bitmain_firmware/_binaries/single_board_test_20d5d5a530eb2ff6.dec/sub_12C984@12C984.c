int __fastcall sub_12C984(char *a1, _BYTE *a2)
{
  char *v2; // r5
  _BYTE v4[32]; // [sp+4h] [bp-20h] BYREF

  if ( a2 )
  {
    v2 = a1;
    sub_11BB78((int)v4, (int)a2);
    a2 = v4;
    a1 = v2;
  }
  return sub_12C954(a1, (int)a2);
}
