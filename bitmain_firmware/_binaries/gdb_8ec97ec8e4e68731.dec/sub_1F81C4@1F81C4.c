void __fastcall sub_1F81C4(_BYTE *a1, int a2)
{
  _DWORD *v2; // r4
  void *v3; // r0
  _DWORD *v4; // r6
  int v5; // r1
  int v6; // r2
  int v7; // r0
  _DWORD **v8; // r2
  _DWORD *v9; // r4
  _DWORD *v10; // r3
  void *v11; // r0
  _BYTE v12[24]; // [sp+0h] [bp-18h] BYREF

  v2 = (_DWORD *)dword_489360;
  if ( !dword_489360 )
  {
    sub_946B0("No bookmarks.");
    return;
  }
  if ( a1 && *a1 )
  {
    sub_5ADF4((int)v12, (int)a1);
LABEL_14:
    while ( !v12[0] )
    {
      while ( 1 )
      {
        v7 = sub_5AE34((int)v12, v5, v6);
        v8 = (_DWORD **)dword_489360;
        if ( !dword_489360 )
          break;
        v9 = (_DWORD *)dword_489360;
        if ( v7 != *(_DWORD *)(dword_489360 + 4) )
        {
          do
          {
            v9 = (_DWORD *)*v9;
            if ( !v9 )
            {
              sub_946B0("No bookmark #%d.", v7);
              goto LABEL_14;
            }
          }
          while ( v7 != v9[1] );
          if ( (_DWORD *)dword_489360 != v9 )
            goto LABEL_23;
        }
        v8 = *(_DWORD ***)dword_489360;
        dword_489360 = (int)v8;
        if ( v8 )
        {
LABEL_23:
          v10 = *v8;
          if ( *v8 == v9 )
          {
            v10 = v8;
LABEL_32:
            *v10 = *v9;
          }
          else
          {
            while ( v10 )
            {
              if ( (_DWORD *)*v10 == v9 )
                goto LABEL_32;
              v10 = (_DWORD *)*v10;
            }
          }
        }
        v11 = (void *)v9[13];
        if ( v11 )
          free(v11);
        sub_33AC04(v9);
        if ( v12[0] )
          return;
      }
      dword_489360 = MEMORY[0];
      sub_946B0("No bookmark #%d.", v7);
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_5;
    if ( sub_25A3E4("Delete all bookmarks? ") )
    {
      v2 = (_DWORD *)dword_489360;
      if ( !dword_489360 )
      {
LABEL_8:
        dword_489360 = 0;
        return;
      }
      do
      {
LABEL_5:
        v3 = (void *)v2[13];
        v4 = (_DWORD *)*v2;
        if ( v3 )
          free(v3);
        free(v2);
        v2 = v4;
      }
      while ( v4 );
      goto LABEL_8;
    }
  }
}
