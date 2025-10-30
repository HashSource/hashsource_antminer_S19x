const char *__fastcall sub_CADB8(int a1)
{
  unsigned int v2; // r2
  bool v3; // cc
  _DWORD *v4; // r3
  int v5; // r12
  int v6; // r2
  int v7; // r1
  bool v8; // zf

  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 12);
    v3 = v2 > 0x1E;
    if ( v2 != 30 )
      v3 = v2 - 1 > 1;
    if ( v3 )
      return 0;
    if ( off_46C048 == "auto" )
    {
      if ( off_489B60(&dword_4899A0) )
        goto LABEL_9;
    }
    else if ( off_46C048 != "host" )
    {
LABEL_9:
      if ( off_489B60(&dword_4899A0) )
      {
        v4 = *(_DWORD **)(a1 + 28);
        if ( v4 )
        {
          v5 = 0;
          v6 = 0;
          do
          {
            v7 = v4[6];
            v4 = (_DWORD *)*v4;
            if ( v7 )
              v6 = (unsigned __int8)(v6 + 1);
            else
              ++v5;
            if ( !v7 )
              v5 = (unsigned __int8)v5;
          }
          while ( v4 );
          v8 = v5 == 0;
          if ( v5 )
            v8 = v6 == 0;
          if ( !v8 )
            return "host or target";
          if ( v6 )
            return "target";
        }
      }
    }
    return "host";
  }
  return 0;
}
