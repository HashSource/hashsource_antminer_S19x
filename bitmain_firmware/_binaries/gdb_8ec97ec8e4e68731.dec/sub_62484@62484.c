int __fastcall sub_62484(int result)
{
  int v1; // r7
  int v2; // r9
  _DWORD *v3; // r4
  int i; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // [sp+8h] [bp-38h]
  int v13; // [sp+14h] [bp-2Ch]

  if ( !dword_474858 )
  {
    v1 = result;
    result = sub_23E408(dword_4878EC, dword_4878F0, dword_4878F4);
    v2 = result;
    v3 = (_DWORD *)dword_48769C;
    v12 = dword_487668;
    dword_487668 = dword_48769C;
    if ( dword_48769C )
    {
      for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
      {
        result = sub_605EC(i);
        v5 = result;
        if ( result )
        {
          v6 = sub_191AC0(result);
          v7 = sub_191664(v6);
          v8 = sub_2573D8(v7, *(_DWORD *)(v5 + 32));
          v13 = dword_46DC04;
          sub_22F048(v8);
          if ( (v1 & 2) != 0 )
            sub_183DE8(*(_DWORD *)(v5 + 48));
          if ( v2 )
          {
            if ( (v1 & 0xC) != 0 )
            {
              sub_2404E8(*(_DWORD *)(v5 + 48), v1);
              v10 = sub_2594B0(*(_DWORD *)(v5 + 32), "thread-selected,id=\"%d\"", *(_DWORD *)(v2 + 20));
              if ( *(_DWORD *)(v2 + 44) != 1 )
              {
                if ( sub_15D504(v10) )
                {
                  v11 = sub_15F7E8(0);
                  sub_20E8A4(v7, v11, 1);
                }
              }
            }
          }
          v9 = sub_25680C(*(_DWORD *)(v5 + 32));
          if ( v13 == 1 )
          {
            sub_22F048(v9);
          }
          else if ( v13 )
          {
            if ( v13 == 2 )
              sub_22EFF4(v9);
          }
          else
          {
            sub_22EF7C(v9);
          }
          result = sub_2573D8(v7, 0);
        }
        v3 = (_DWORD *)*v3;
        if ( !v3 )
          break;
        dword_487668 = (int)v3;
      }
    }
    dword_487668 = v12;
  }
  return result;
}
