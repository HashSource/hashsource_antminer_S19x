int __fastcall sub_48C28(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r12
  int v5; // r6
  _DWORD *v6; // r0
  int v7; // r3
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2

  if ( a1 )
  {
    if ( *a1 == 1 )
    {
      v3 = a1[3];
      if ( v3 > a2 )
      {
        v5 = 4 * a2;
        v6 = *(_DWORD **)(a1[4] + 4 * a2);
        if ( v6 && v6[1] != -1 )
        {
          v9 = v6 + 1;
          __dmb(0xBu);
          do
          {
            v10 = __ldrex(v9);
            v11 = v10 - 1;
          }
          while ( __strex(v11, v9) );
          if ( !v11 )
            sub_48A34(v6);
          v3 = a1[3];
          v7 = v3 - 1;
          if ( v3 - 1 <= a2 )
            goto LABEL_7;
        }
        else
        {
          v7 = v3 - 1;
          if ( v3 - 1 <= a2 )
          {
LABEL_7:
            a1[3] = v7;
            return 0;
          }
        }
        memmove((void *)(a1[4] + v5), (const void *)(a1[4] + v5 + 4), 4 * (~a2 + v3));
        v7 = a1[3] - 1;
        goto LABEL_7;
      }
    }
  }
  return -1;
}
