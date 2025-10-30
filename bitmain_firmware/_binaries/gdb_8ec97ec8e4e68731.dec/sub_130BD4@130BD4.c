const char *__fastcall sub_130BD4(int a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // r3
  _DWORD *v7; // [sp+4h] [bp-8h] BYREF

  v7 = a3;
  if ( a1 )
  {
    while ( 1 )
    {
      v5 = sub_12E748(a1, 3, v7);
      if ( v5 )
        break;
      if ( !sub_130BA4(a1, (int *)&v7) )
        goto LABEL_6;
    }
    *a2 = 0;
    return (const char *)v5;
  }
  else
  {
LABEL_6:
    *a2 = 1;
    return "(anonymous namespace)";
  }
}
