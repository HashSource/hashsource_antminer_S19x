int (__fastcall *sub_22DE18())(int a1)
{
  int (__fastcall *result)(int); // r0
  _DWORD *v1; // r3
  int v2; // r2

  memset(&dword_4899A0, 0, 0x2E4u);
  result = (int (__fastcall *)(int))sub_223768(&dword_4899A0);
  v1 = (_DWORD *)dword_489F70;
  dword_489AD8 = *(_DWORD *)(dword_489F70 + 312);
  do
  {
    if ( !dword_4899A4 )
      dword_4899A4 = v1[1];
    if ( !dword_4899A8 )
      dword_4899A8 = v1[2];
    if ( !dword_489AF4 )
      dword_489AF4 = v1[85];
    if ( !dword_489A28 )
      dword_489A28 = v1[34];
    if ( !dword_489A2C )
      dword_489A2C = v1[35];
    v2 = dword_489AF0;
    if ( !dword_489AF0 )
      v2 = v1[84];
    v1 = (_DWORD *)*v1;
    if ( !dword_489AF0 )
      dword_489AF0 = v2;
  }
  while ( v1 );
  dword_4899A0 = dword_489F70;
  if ( dword_489C84 )
  {
    memcpy(&unk_489C8C, &dword_4899A0, 0x2E4u);
    off_4899C4 = sub_22979C;
    off_4899C8 = sub_2296A8;
    off_4899CC = sub_2295B4;
    off_4899D0 = sub_22D430;
    off_4899D4 = sub_2262A8;
    off_4899D8 = sub_2320D8;
    off_4899DC = sub_2294C0;
    off_4899E0 = sub_2293CC;
    off_4899E4 = (int (*)(void))sub_2261F0;
    off_4899E8 = sub_226170;
    off_4899EC = sub_22D0B0;
    off_4899F0 = sub_22CF4C;
    off_4899F4 = sub_229310;
    off_4899F8 = sub_229254;
    off_4899FC = sub_229198;
    off_489A00 = sub_2290DC;
    off_489A04 = sub_228F70;
    off_489A08 = sub_228EB4;
    off_489A0C = (int (*)(void))sub_22CE20;
    off_489A10 = (int (*)(void))sub_22CCF4;
    off_489A14 = sub_22C4B4;
    off_489A18 = sub_22C310;
    off_489A1C = sub_22C1AC;
    off_489A20 = sub_22C048;
    off_489A24 = sub_228DF8;
    off_489A30 = (int (__fastcall *)(_DWORD, _DWORD))sub_22BF54;
    off_489A34 = (int (*)(void))sub_22BDF0;
    off_489A38 = (int (__fastcall *)(_DWORD, _DWORD))sub_22BCC0;
    off_489A3C = sub_22BB1C;
    off_489A40 = sub_22B9F0;
    off_489A44 = (int (*)(void))sub_228D3C;
    off_489A48 = sub_2260F0;
    off_489A4C = sub_226070;
    off_489A50 = sub_225FF0;
    off_489A54 = sub_225F70;
    off_489A58 = sub_228C48;
    off_489A5C = sub_225EF0;
    off_489A60 = sub_228B54;
    off_489A68 = (int (*)(void))sub_22AE80;
    off_489A6C = sub_228A5C;
    off_489A70 = sub_228964;
    off_489A74 = sub_22886C;
    off_489A78 = sub_228774;
    off_489A7C = sub_228640;
    off_489A80 = sub_228548;
    off_489A84 = sub_228450;
    off_489A88 = sub_225E00;
    off_489A8C = sub_229858;
    dword_489A90 = (int)sub_2282E4;
    off_489A94 = sub_225D80;
    off_489A98 = (int (*)(void))sub_228228;
    off_489A9C = sub_22D350;
    off_489AA0 = sub_22D270;
    off_489AA4 = sub_22AD78;
    off_489AA8 = sub_225D00;
    off_489AAC = sub_22AC70;
    off_489AB0 = sub_225C0C;
    off_489AB4 = sub_225B18;
    off_489AB8 = sub_2280C8;
    off_489ABC = sub_22ABA4;
    off_489AC0 = sub_22AAD8;
    off_489AC4 = sub_225A98;
    off_489AC8 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD))sub_2259A8;
    off_489ACC = (int (*)(void))sub_227FD0;
    off_489AD0 = (int (*)(void))sub_2258F0;
    dword_489AD4 = (int)sub_225838;
    off_489AF8 = sub_227F14;
    off_489AFC = sub_227E58;
    off_489B00 = sub_227D9C;
    off_489B04 = sub_227CE0;
    dword_489B08 = (int)sub_227C24;
    off_489B0C = (int (*)(void))sub_227B68;
    off_489B10 = (int (*)(void))sub_227A3C;
    off_489B14 = (int (*)(void))sub_22790C;
    off_489B18 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD))sub_2277E0;
    off_489B1C = (int (*)(void))sub_2276EC;
    off_489B20 = sub_22B880;
    dword_489B24 = (int)sub_229F20;
    dword_489B28 = (int)sub_229E5C;
    off_489B2C = sub_22DAC8;
    off_489B30 = sub_22C9D8;
    off_489B34 = sub_2257B8;
    dword_489B38 = (int)sub_225700;
    off_489B3C = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_22A988;
    off_489B40 = (int (__fastcall *)(_DWORD))sub_22B6E4;
    off_489B44 = sub_22B504;
    off_489B48 = sub_227630;
    off_489B4C = sub_227574;
    off_489B50 = sub_2274B8;
    off_489B54 = sub_2273FC;
    off_489B5C = sub_227340;
    off_489B60 = sub_227284;
    off_489B64 = (int (*)(void))sub_2271C8;
    off_489B68 = sub_22CBF0;
    off_489B6C = sub_22CAE4;
    off_489B70 = (int (*)(void))sub_22710C;
    off_489B94 = sub_225680;
    off_489B98 = sub_2255C8;
    off_489B9C = sub_227050;
    off_489BA0 = sub_225510;
    off_489BA4 = sub_225458;
    off_489BA8 = sub_2253A0;
    off_489BAC = sub_225320;
    off_489BB0 = sub_2252A0;
    off_489BB4 = sub_226F5C;
    off_489BB8 = sub_2251B0;
    off_489BBC = sub_225130;
    off_489BC0 = sub_22B324;
    off_489BC4 = sub_22C8A4;
    off_489BC8 = sub_226E68;
    off_489BCC = sub_226D74;
    off_489BD0 = sub_226C80;
    off_489BD4 = sub_22C720;
    dword_489BD8 = (int)sub_226BC4;
    off_489BDC = sub_226B08;
    off_489BE0 = sub_226A4C;
    off_489BE4 = sub_22C658;
    off_489BE8 = sub_2268F0;
    off_489BEC = sub_22A880;
    off_489BF0 = sub_22B1B8;
    dword_489BF4 = (int)sub_22B078;
    dword_489BF8 = (int)sub_2250B0;
    off_489BFC = (int (*)(void))sub_22AF4C;
    off_489C00 = (int (*)(void))sub_224FC0;
    off_489C04 = sub_22E844;
    off_489C08 = (int (*)(void))sub_2267F8;
    dword_489C0C = (int)sub_22673C;
    off_489C10 = sub_226644;
    off_489C14 = sub_22A744;
    off_489C18 = sub_224F08;
    off_489C1C = sub_224E50;
    off_489C20 = sub_2264DC;
    off_489C24 = sub_224D60;
    off_489C28 = sub_22A63C;
    off_489C2C = sub_224CE0;
    dword_489C30 = (int)sub_224C60;
    off_489C34 = sub_224BA8;
    off_489C38 = sub_224B28;
    off_489C3C = sub_22A534;
    off_489C40 = sub_22A3F0;
    off_489C44 = sub_224AA8;
    off_489C48 = sub_224A28;
    off_489C4C = sub_2249A8;
    off_489C50 = sub_229D98;
    off_489C54 = sub_229A20;
    off_489C58 = sub_22A2B0;
    off_489C5C = sub_22A170;
    off_489C60 = sub_2263E4;
    off_489C64 = sub_229C58;
    off_489C68 = sub_229B18;
    off_489C6C = (int (*)(void))sub_226328;
    off_489C70 = sub_2248F0;
    off_489C74 = sub_224838;
    off_489C78 = sub_2247B8;
    off_489C7C = sub_224738;
    return sub_2248F0;
  }
  return result;
}
