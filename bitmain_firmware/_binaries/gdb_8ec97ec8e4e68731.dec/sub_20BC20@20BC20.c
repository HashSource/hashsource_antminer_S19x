int *__fastcall sub_20BC20(int *result)
{
  int *v1; // r9
  int v2; // t1
  char *v3; // r1
  int v4; // r2
  _DWORD *v5; // r10
  const char *v6; // r11
  int v7; // r6
  _DWORD *v8; // r5
  int v9; // r4
  int v10; // r1
  int v11; // t1
  unsigned int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r5
  int v16; // r6
  int *v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r1
  int v21; // r0
  int v22; // [sp+4h] [bp-20h]
  int v23; // [sp+8h] [bp-1Ch]
  int v24; // [sp+Ch] [bp-18h]
  int v25[2]; // [sp+14h] [bp-10h] BYREF
  int v26; // [sp+1Ch] [bp-8h]

  v1 = (int *)dword_489424;
  v22 = (int)result;
  if ( dword_489424 < (unsigned int)(dword_489424 + 4 * dword_489420) )
  {
    do
    {
      v2 = *v1++;
      v3 = *(char **)(v2 + 24);
      v4 = *v3;
      result = (int *)(v4 - 3);
      if ( (unsigned int)(v4 - 3) > 2 )
      {
        if ( dword_47AC88 > 0 )
          result = sub_F43B4(&off_46D334, "forward-referenced types left unresolved, type code %d.", v4);
      }
      else if ( (v3[1] & 4) != 0 )
      {
        if ( *((_DWORD *)v3 + 3) )
        {
          v5 = (_DWORD *)dword_4788F0;
          if ( dword_4788F0 )
          {
            v6 = (const char *)*((_DWORD *)v3 + 3);
            do
            {
              v7 = v5[1];
              if ( v7 > 0 )
              {
                v8 = v5 + 1;
                v9 = 0;
                do
                {
                  while ( 1 )
                  {
                    v11 = v8[1];
                    ++v8;
                    v10 = v11;
                    ++v9;
                    v12 = *(unsigned __int8 *)(v11 + 32);
                    result = (int *)(v12 >> 3);
                    if ( *((_DWORD *)off_46DBB8 + 4 * (v12 >> 3)) == 8 && (v12 & 7) == 2 )
                    {
                      v13 = *(_DWORD *)(v10 + 24);
                      v14 = *(v1 - 1);
                      result = (int *)**(char **)(v14 + 24);
                      if ( (int *)**(char **)(v13 + 24) == result )
                      {
                        result = *(int **)(v13 + 16);
                        if ( *(int **)(v14 + 16) == result )
                        {
                          v23 = *(_DWORD *)(v10 + 24);
                          v24 = *(v1 - 1);
                          result = (int *)strcmp(*(const char **)v10, v6);
                          if ( !result )
                            break;
                        }
                      }
                    }
                    if ( v7 <= v9 )
                      goto LABEL_16;
                  }
                  result = (int *)((int (__fastcall *)(int, int))loc_170574)(v24, v23);
                  v7 = v5[1];
                }
                while ( v7 > v9 );
              }
LABEL_16:
              v5 = (_DWORD *)*v5;
            }
            while ( v5 );
          }
        }
        else if ( dword_47AC88 > 0 )
        {
          result = sub_F43B4(&off_46D334, "need a type name");
        }
      }
    }
    while ( dword_489424 + 4 * dword_489420 > (unsigned int)v1 );
  }
  v15 = 0;
  dword_489420 = 0;
  if ( dword_489414[0] > 0 )
  {
    v16 = 0;
    do
    {
      while ( 1 )
      {
        ++v16;
        v17 = (int *)(dword_489418 + v15);
        v15 += 12;
        v18 = v17[1];
        v19 = v17[2];
        v25[0] = *v17;
        v25[1] = v18;
        v26 = v19;
        result = sub_2062E0(v25, v22);
        v20 = *result;
        if ( v26 != *result )
        {
          if ( **(_BYTE **)(v20 + 24) )
            break;
        }
        if ( dword_489414[0] <= v16 )
          goto LABEL_24;
      }
      v21 = v26;
      *(_DWORD *)(v26 + 16) = *(_DWORD *)(v20 + 16);
      result = (int *)((int (__fastcall *)(int))loc_170574)(v21);
    }
    while ( dword_489414[0] > v16 );
  }
LABEL_24:
  dword_489414[0] = 0;
  return result;
}
