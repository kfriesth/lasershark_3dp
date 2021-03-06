/**
 * THIS FILE IS GENERATED BY jsonrpcstub, DO NOT CHANGE IT!!!!!
 */

#ifndef _ABSTRACTLASERSHARKJSONSERVER_H_
#define _ABSTRACTLASERSHARKJSONSERVER_H_

#include <jsonrpc/rpc.h>

class AbstractLaserSharkJSONServer : public jsonrpc::AbstractServer<AbstractLaserSharkJSONServer>
{
    public:
        AbstractLaserSharkJSONServer(jsonrpc::AbstractServerConnector* conn) :
            jsonrpc::AbstractServer<AbstractLaserSharkJSONServer>(conn) 
        {
            this->bindAndAddMethod(new jsonrpc::Procedure("getLaserSharkJSONVersion", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING,  NULL), &AbstractLaserSharkJSONServer::getLaserSharkJSONVersionI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getLayerDone", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::getLayerDoneI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getLayerErrorMessage", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::getLayerErrorMessageI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getLayerRunning", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::getLayerRunningI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getLayerSamplesLeft", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::getLayerSamplesLeftI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getLayerTotalSamples", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::getLayerTotalSamplesI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getMaxSampleRate", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::getMaxSampleRateI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getResolution", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::getResolutionI);
            this->bindAndAddNotification(new jsonrpc::Procedure("printText", jsonrpc::PARAMS_BY_NAME, "text",jsonrpc::JSON_STRING, NULL), &AbstractLaserSharkJSONServer::printTextI);
            this->bindAndAddMethod(new jsonrpc::Procedure("sendLayer", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "base64PNGData",jsonrpc::JSON_STRING,"xUpperLeftPos",jsonrpc::JSON_INTEGER,"yUpperLeftPos",jsonrpc::JSON_INTEGER, NULL), &AbstractLaserSharkJSONServer::sendLayerI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setSampleRate", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "rate",jsonrpc::JSON_INTEGER, NULL), &AbstractLaserSharkJSONServer::setSampleRateI);
            this->bindAndAddMethod(new jsonrpc::Procedure("startLayer", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::startLayerI);
            this->bindAndAddMethod(new jsonrpc::Procedure("stopAndClearLayer", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractLaserSharkJSONServer::stopAndClearLayerI);

        }
        
        inline virtual void getLaserSharkJSONVersionI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getLaserSharkJSONVersion();
        }

        inline virtual void getLayerDoneI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getLayerDone();
        }

        inline virtual void getLayerErrorMessageI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getLayerErrorMessage();
        }

        inline virtual void getLayerRunningI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getLayerRunning();
        }

        inline virtual void getLayerSamplesLeftI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getLayerSamplesLeft();
        }

        inline virtual void getLayerTotalSamplesI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getLayerTotalSamples();
        }

        inline virtual void getMaxSampleRateI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getMaxSampleRate();
        }

        inline virtual void getResolutionI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getResolution();
        }

        inline virtual void printTextI(const Json::Value& request) 
        {
            this->printText(request["text"].asString());
        }

        inline virtual void sendLayerI(const Json::Value& request, Json::Value& response) 
        {
            response = this->sendLayer(request["base64PNGData"].asString(), request["xUpperLeftPos"].asInt(), request["yUpperLeftPos"].asInt());
        }

        inline virtual void setSampleRateI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setSampleRate(request["rate"].asInt());
        }

        inline virtual void startLayerI(const Json::Value& request, Json::Value& response) 
        {
            response = this->startLayer();
        }

        inline virtual void stopAndClearLayerI(const Json::Value& request, Json::Value& response) 
        {
            response = this->stopAndClearLayer();
        }


        virtual std::string getLaserSharkJSONVersion() = 0;
        virtual Json::Value getLayerDone() = 0;
        virtual Json::Value getLayerErrorMessage() = 0;
        virtual Json::Value getLayerRunning() = 0;
        virtual Json::Value getLayerSamplesLeft() = 0;
        virtual Json::Value getLayerTotalSamples() = 0;
        virtual Json::Value getMaxSampleRate() = 0;
        virtual Json::Value getResolution() = 0;
        virtual void printText(const std::string& text) = 0;
        virtual Json::Value sendLayer(const std::string& base64PNGData, const int& xUpperLeftPos, const int& yUpperLeftPos) = 0;
        virtual Json::Value setSampleRate(const int& rate) = 0;
        virtual Json::Value startLayer() = 0;
        virtual Json::Value stopAndClearLayer() = 0;

};
#endif //_ABSTRACTLASERSHARKJSONSERVER_H_
