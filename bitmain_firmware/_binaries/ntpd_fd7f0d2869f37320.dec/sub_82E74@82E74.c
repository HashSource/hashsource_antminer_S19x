void __fastcall sub_82E74(unsigned int a1, int a2)
{
  bool v2; // cc
  int v3; // r3
  int v5; // r6
  const char *v6; // r0
  unsigned int v7; // r2
  char *v8; // [sp+0h] [bp-8h] BYREF

  v2 = a2 != 0;
  if ( a2 )
    v2 = a1 > 0xF;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    v5 = v3 & 8;
    if ( (v3 & 8) == 0 )
    {
      v6 = *(const char **)(a2 + 24);
      if ( v6 )
      {
        v7 = *(unsigned __int8 *)v6;
        if ( v7 == 70 )
          goto LABEL_13;
        if ( v7 > 0x46 )
        {
          if ( v7 == 102 || v7 == 110 || v7 == 78 )
            goto LABEL_13;
        }
        else
        {
          if ( v7 == 35 )
          {
            v5 = *((unsigned __int8 *)v6 + 1) != 102;
            goto LABEL_13;
          }
          if ( v7 == 48 )
          {
            if ( strtol(v6, &v8, v3 & 8) )
            {
              v3 = *(_DWORD *)(a2 + 16);
              v5 = 1;
            }
            else
            {
              v3 = *(_DWORD *)(a2 + 16);
              v5 = (unsigned __int8)*v8;
              if ( *v8 )
                v5 = 1;
            }
            goto LABEL_13;
          }
          if ( !*v6 )
          {
LABEL_13:
            if ( (v3 & 0x40) != 0 )
            {
              free(*(void **)(a2 + 24));
              *(_DWORD *)(a2 + 16) &= ~0x40u;
            }
            *(_DWORD *)(a2 + 24) = v5;
            return;
          }
        }
        v5 = 1;
        goto LABEL_13;
      }
    }
  }
}
