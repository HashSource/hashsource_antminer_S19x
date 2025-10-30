int __fastcall sub_60F14(int result, int a2, int a3)
{
  _DWORD *v3; // r5
  int v4; // r3
  int i; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r0
  const char *v12; // r0
  _DWORD *v13; // r0
  int v14; // [sp+4h] [bp-3Ch]
  int v16; // [sp+Ch] [bp-34h]
  int v17; // [sp+14h] [bp-2Ch]

  if ( !dword_474854 )
  {
    v3 = (_DWORD *)dword_48769C;
    v4 = dword_487668;
    dword_487668 = dword_48769C;
    v16 = v4;
    if ( dword_48769C )
    {
      v14 = result;
      for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
      {
        result = sub_605EC(i);
        v7 = result;
        if ( result )
        {
          v8 = sub_191AC0(result);
          v9 = sub_191664(v8);
          v17 = dword_46DC04;
          sub_22F048(v9);
          sub_2594B0(*(_DWORD *)(v7 + 32), "memory-changed");
          sub_2573D8(v9, *(_DWORD *)(v7 + 32));
          v10 = sub_257694(v9, "thread-group", "i%d", *(_DWORD *)(v14 + 8));
          v11 = sub_16F654(v10);
          sub_257630(v9, "addr", v11, a2);
          v12 = (const char *)sub_98B08(a3, a3 >> 31);
          sub_257694(v9, "len", "%s", v12);
          v13 = (_DWORD *)((int (__fastcall *)(int))loc_1B7C78)(a2);
          if ( v13 && v13[1] && (*(_DWORD *)(*v13 + 20) & 0x10) != 0 )
            sub_2575E8(v9, "type", "code");
          sub_2573D8(v9, 0);
          result = sub_25680C(*(_DWORD *)(v7 + 32));
          if ( v17 == 1 )
          {
            result = sub_22F048(result);
          }
          else if ( v17 )
          {
            if ( v17 == 2 )
              result = sub_22EFF4(result);
          }
          else
          {
            result = sub_22EF7C(result);
          }
        }
        v3 = (_DWORD *)*v3;
        if ( !v3 )
          break;
        dword_487668 = (int)v3;
      }
    }
    dword_487668 = v16;
  }
  return result;
}
