void __fastcall sub_273D18(int a1, const char *a2)
{
  int v2; // r5
  int v4; // r3
  const char *v5; // r2
  int v6; // r1
  int v7; // r1
  void (__fastcall *v8)(int, int, _DWORD, char *); // r6
  int v9; // lr
  unsigned int v10; // r2
  _BYTE *v11; // r3
  unsigned __int8 *v12; // r12
  int v13; // t1
  unsigned int v14; // r6
  int v15; // r2
  int v16; // t1
  int v17; // r3
  void *v18; // r0
  int v19; // r4
  void *v20; // r5

  v2 = *(_DWORD *)(a1 + 16);
  sub_273C78(a1, "Leaving element <%s>", a2);
  v4 = *(_DWORD *)(v2 - 36);
  if ( v4 && (v5 = *(const char **)v4) != 0 )
  {
    v6 = 1;
    while ( (*(_DWORD *)(v2 - 28) & v6) != 0 || (*(_DWORD *)(v4 + 12) & 1) != 0 )
    {
      v4 += 24;
      v6 *= 2;
      if ( v4 )
      {
        v5 = *(const char **)v4;
        if ( *(_DWORD *)v4 )
          continue;
      }
      goto LABEL_8;
    }
    v19 = sub_273CF8(a1, "Required element <%s> is missing", v5);
    v20 = sub_92E28();
    if ( *(int *)(v19 + 24) >= 0 )
      sub_273D18(v19);
    sub_92E40((int)v20);
  }
  else
  {
LABEL_8:
    v7 = *(_DWORD *)(v2 - 32);
    if ( v7 )
    {
      v8 = *(void (__fastcall **)(int, int, _DWORD, char *))(v7 + 20);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v2 - 20);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v2 - 20);
          v11 = *(_BYTE **)(v2 - 24);
          if ( v9 > 0 && (v12 = &v11[v9 - 1], (word_438898[*v12] & 0x40) != 0) )
          {
            while ( 1 )
            {
              v14 = --v10;
              if ( !v10 )
                break;
              v13 = *--v12;
              if ( (word_438898[v13] & 0x40) == 0 )
              {
                if ( v9 < v10 )
                  sub_33D20C(
                    "%s: __pos (which is %zu) > this->size() (which is %zu)",
                    "basic_string::erase",
                    v10,
                    *(_DWORD *)(v2 - 20));
                break;
              }
            }
          }
          else
          {
            v14 = *(_DWORD *)(v2 - 20);
          }
          *(_DWORD *)(v2 - 20) = v14;
          v11[v14] = 0;
          if ( *v11 && (word_438898[(unsigned __int8)*v11] & 0x40) != 0 )
          {
            do
            {
              v16 = (unsigned __int8)*++v11;
              v15 = v16;
            }
            while ( v16 && (word_438898[v15] & 0x40) != 0 );
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)(v2 - 32) + 20))(a1);
        }
        else
        {
          v8(a1, v7, *(_DWORD *)(a1 + 8), "");
        }
      }
    }
    else
    {
      XML_DefaultCurrent(*(XML_Parser *)a1);
    }
    v17 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v17 - 36;
    v18 = *(void **)(v17 - 24);
    if ( v18 != (void *)(v17 - 16) )
      sub_349260(v18);
  }
}
