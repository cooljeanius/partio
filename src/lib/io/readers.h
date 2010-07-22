/*
 * <b>CONFIDENTIAL INFORMATION: This software is the confidential and
 * proprietary information of Walt Disney Animation Studios ("Disney").
 * This software is owned by Disney and may not be used, disclosed,
 * reproduced or distributed for any purpose without prior written
 * authorization and license from Disney. Reproduction of any section of
 * this software must include this legend and all copyright notices.
 * (c) Disney. All rights reserved.</b>
 *
 */
#ifndef _READERS_h_
#define _READERS_h_

namespace Partio{
ParticlesDataMutable* readBGEO(const char* filename,const bool headersOnly);
ParticlesDataMutable* readGEO(const char* filename,const bool headersOnly);
//ParticlesDataMutable* readPDB(const char* filename,const bool headersOnly);
ParticlesDataMutable* readPDA(const char* filename,const bool headersOnly);
//ParticlesDataMutable* readPTC(const char* filename,const bool headersOnly);
void writeBGEO(const char* filename,const ParticlesData& p,const bool compressed);
void writeGEO(const char* filename,const ParticlesData& p,const bool compressed);
//void writePDB(const char* filename,const ParticlesData& p,const bool compressed);
void writePDA(const char* filename,const ParticlesData& p,const bool compressed);
//void writePTC(const char* filename,const ParticlesData& p,const bool compressed);
}

#endif
