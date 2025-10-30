int __fastcall sub_A34A0(int result)
{
  int i; // r6
  int v2; // r4
  const char *v3; // r0
  char **v4; // r5
  const char *v5; // r0
  int v6; // r0
  int v7; // r0
  const char *v8; // t1
  int v9; // r0
  char **v10; // r4
  const char *v11; // r0
  const char *v12; // t1
  int v13; // [sp+0h] [bp-30h] BYREF
  void *ptr; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v15[4]; // [sp+8h] [bp-28h] BYREF
  int v16; // [sp+Ch] [bp-24h]

  for ( i = result; result; i = result )
  {
    ((void (__fastcall *)(_BYTE *, int))loc_15E200)(v15, i);
    v2 = v16;
    if ( v16 )
    {
      v3 = (const char *)sub_204308(v16);
      if ( !access(v3, 4) )
      {
        v4 = off_3742C4;
        v5 = "^[agis]-.*\\.ad[bs]$";
        while ( 1 )
        {
          re_comp(v5);
          v9 = sub_3245A4(*(_DWORD *)(v2 + 12));
          if ( re_exec(v9) )
            break;
          v6 = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4);
          if ( v6 )
          {
            v7 = sub_1B87A8(v6);
            if ( re_exec(v7) )
              break;
          }
          v8 = v4[1];
          ++v4;
          v5 = v8;
          if ( !v8 )
          {
            sub_20DC2C(&ptr, i, &v13, 0);
            if ( !ptr )
              break;
            v10 = &off_3742E0;
            v11 = "___clean[.$a-zA-Z0-9_]*$";
            do
            {
              re_comp(v11);
              if ( re_exec(ptr) )
              {
                if ( ptr )
                  free(ptr);
                goto LABEL_9;
              }
              v12 = *v10++;
              v11 = v12;
            }
            while ( v12 );
            if ( ptr )
              free(ptr);
            return sub_15E10C(i);
          }
        }
      }
    }
LABEL_9:
    result = ((int (__fastcall *)(int))loc_15FA88)(i);
  }
  return result;
}
