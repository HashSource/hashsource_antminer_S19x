int __fastcall sub_12B4DC(int *a1, int *a2)
{
  __int64 v3; // [sp+0h] [bp-Ch] BYREF

  if ( !sub_12B260((int)&v3, (int)&v3 + 4, a2, a1) )
    return -2;
  if ( (int)v3 > 0 || SHIDWORD(v3) > 0 )
    return 1;
  if ( v3 )
    return -1;
  return 0;
}
