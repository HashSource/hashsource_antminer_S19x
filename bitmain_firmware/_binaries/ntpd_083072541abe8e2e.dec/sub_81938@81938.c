void __fastcall sub_81938(unsigned int a1, int a2)
{
  bool v2; // cc
  int v3; // r3
  const char *v5; // r0
  unsigned int v6; // r1
  int v7; // r6
  char *v8; // [sp+0h] [bp-8h] BYREF

  v2 = a2 != 0;
  if ( a2 )
    v2 = a1 > 0xF;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    if ( (v3 & 8) == 0 )
    {
      v5 = *(const char **)(a2 + 24);
      if ( v5 )
      {
        v6 = *(unsigned __int8 *)v5;
        if ( v6 == 70 )
          goto LABEL_19;
        if ( v6 > 0x46 )
        {
          if ( v6 == 102 || v6 == 110 || v6 == 78 )
            goto LABEL_19;
        }
        else
        {
          if ( v6 == 35 )
          {
            v7 = *((unsigned __int8 *)v5 + 1) != 102;
            goto LABEL_15;
          }
          if ( v6 == 48 )
          {
            if ( !strtol(v5, &v8, 0) )
            {
              v3 = *(_DWORD *)(a2 + 16);
              v7 = (unsigned __int8)*v8;
              if ( *v8 )
                v7 = 1;
              goto LABEL_15;
            }
            v3 = *(_DWORD *)(a2 + 16);
            goto LABEL_14;
          }
          if ( !*v5 )
          {
LABEL_19:
            v7 = 0;
            goto LABEL_15;
          }
        }
LABEL_14:
        v7 = 1;
LABEL_15:
        if ( (v3 & 0x40) != 0 )
        {
          free(*(void **)(a2 + 24));
          *(_DWORD *)(a2 + 16) &= ~0x40u;
        }
        *(_DWORD *)(a2 + 24) = v7;
      }
    }
  }
}
