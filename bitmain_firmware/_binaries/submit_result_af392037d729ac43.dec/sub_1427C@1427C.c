void __fastcall sub_1427C(_DWORD *a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r6
  unsigned int i; // r4
  int v5; // r3
  unsigned int *v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r1

  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        sub_12454((int)(a1 + 2));
        sub_1383C(a1);
        return;
      case 1:
        v3 = a1[3];
        v2 = (_DWORD *)a1[4];
        if ( v3 )
        {
          for ( i = 0; i < v3; ++i )
          {
            v5 = v2[i];
            v6 = (unsigned int *)(v5 + 4);
            if ( v5 && *(_DWORD *)(v5 + 4) != -1 )
            {
              __dmb(0xFu);
              do
              {
                v7 = __ldrex(v6);
                v8 = v7 - 1;
              }
              while ( __strex(v8, v6) );
              if ( !v8 )
                sub_1427C(v5);
              v2 = (_DWORD *)a1[4];
              v3 = a1[3];
            }
          }
        }
        goto LABEL_4;
      case 2:
        v2 = (_DWORD *)a1[2];
LABEL_4:
        sub_1383C(v2);
        goto LABEL_5;
      case 3:
      case 4:
LABEL_5:
        sub_1383C(a1);
        break;
      default:
        return;
    }
  }
}
